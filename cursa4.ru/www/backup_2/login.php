<?php
	require "db.php";

	$data=$_POST;
	
	if(isset($data['do_login'])){
		$errors=array();
		$user = R::find('users','login = ?',array($data['login']));
		$user_pass = R::find('users','password = ?', array($data['password']));
		if($user){
			//логин существует
			if($user_pass){
				//логиним
				//echo "Good";
				$_SESSION['logged_user'] = $user;
				echo '<div style="color: green;">Вы вошли на сайт =)<br>Перейти на <a href="/">главную</a></div><hr>';
			}
			else{
				$errors[] = 'Неверный пароль';
			}
		}
		else{
			$errors[] = 'Пользователь с таким логином не найден';
		}
		
		if(!empty($errors)){
			echo '<div style="color: red;">'.array_shift($errors).'</div><hr>';
		}
	}
	
?>

<form action="login.php" method="POST">
	
	<p>
		<p><strong>Логин</strong>:</p>
		<input type="text" name="login" value="<?php echo @$data['login']; ?>">
	</p>

	<p>
		<p><strong>Пароль</strong>:</p>
		<input type="text" name="password" value="<?php echo @$data['password']; ?>">
	</p>
	
	<p>
		<button type="submit" name="do_login">Войти</button>
	</p>

</form>