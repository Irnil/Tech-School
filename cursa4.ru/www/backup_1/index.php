<?php
	require "db.php";
?>

<?php if(isset($_SESSION['logged_user'])):?>
	�� ������������ =)<br>
	������, <?php echo $_SESSION['logged_user']->login; ?>!
	<hr>
	<a href="/logout.php">�����</a>
<?php else : ?>	

<a href="/login.php">�����</a><br>
<a href="/signup.php">�����������</a><br>

<?php endif; ?>