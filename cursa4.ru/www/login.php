<?php
	require "db.php";

	$data=$_POST;
	
	if(isset($data['do_login'])){
		$errors=array();
		$user = R::find('users','login = ?',array($data['login']));
		$user_pass = R::find('users','password = ?', array($data['password']));
		$rank = R::find('users','rank = ?', array($data['rank']));
		if($user){
			//����� ����������
			if($user_pass){
				//�������
				//echo "Good";
				$_SESSION['logged_user'] = $user;
				echo '<div style="color: green;">�� ����� �� ���� =)<br>������� �� <a href="/">�������</a></div><hr>';
				
			//
			if($rank="admin"){
					echo'<div style="color: silver;">������� <br>� <a href="/adminka.php">�������</a></div><hr>';
				}
			//
			
			}
			else{
				$errors[] = '�������� ������';
			}
		}
		else{
			$errors[] = '������������ � ����� ������� �� ������';
		}
		
		if(!empty($errors)){
			echo '<div style="color: red;">'.array_shift($errors).'</div><hr>';
		}
	}
	
?>

<form action="login.php" method="POST">
	
	<p>
		<p><strong>�����</strong>:</p>
		<input type="text" name="login" value="<?php echo @$data['login']; ?>">
	</p>

	<p>
		<p><strong>������</strong>:</p>
		<input type="text" name="password" value="<?php echo @$data['password']; ?>">
	</p>
	
	<p>
		<button type="submit" name="do_login">�����</button>
	</p>

</form>