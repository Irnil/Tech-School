<?php
	require "db.php";
	
	$data=$_POST;
	if(isset($data['do_signup'])){
		//здесь регистрируем
		$errors=array();
		
		if(trim($data['login'])==''){
			$errors[]='Логин не введен';
		}
		
		if($data['password']==''){
			$errors[]='Пароль не введен';
		}   
		
		if($data['password_2']!=$data['password']){
			$errors[]='Пароль не совпадает с подтверждением';
		}
		
		if(R::count('users',"login = ?",array($data['login'])) > 0 ){
			$errors[]='Этот логин занят.';
		}
		
		if(R::count('users',"email = ?",array($data['email'])) > 0 ){
			$errors[]='На этот email уже есть аккаунт.';
		}
		
		if(empty($errors)){
			//все хорошо, регистрируем
			$user=R::dispense('users');
			$user->login = $data['login'];
			$user->email = $data['email'];
			$user->password = $data['password'];
			$user->rank = "user";
			R::store($user);
			echo '<div style="color: green;">"Регистрация завершена"<br>Перейти на <a href="/">главную</a></div><hr>';
		}else{
			echo '<div style="color: red;">'.array_shift($errors).'</div><hr>';
		}
	
	}
?>

<form action="/signup.php" method="POST">

	<p>
		<p><strong>Задайте логин:</strong></p>
		<input type="text" name="login" value="<?php echo @$data['login']; ?>">
	</p>
	
	<p>
		<p><strong>Введите Ваш email:</strong></p>
		<input type="email" name="email" value="<?php echo @$data['email']; ?>">
	</p>
	
	<p>
		<p><strong>Задайте пароль:</strong></p>
		<input type="password" name="password" value="<?php echo @$data['password']; ?>">
	</p>
	<p>
		<p><strong>Подтвердите пароль:</strong></p>
		<input type="password" name="password_2" value="<?php echo @$data['password_2']; ?>">
	</p>
	
	<p>
		<button type="submit" name="do_signup">Зарегистрироваться</button>
	</p>
</form>	