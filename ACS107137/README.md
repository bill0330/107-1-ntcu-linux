# 1</br>
## �إߤT�ӥΤ�A�b���W�٤��O���G examuser1, examuser2, examuser3 �A�P�ɤT�ӥΤ᪺�K�X���O�y ItIsExam �z</br>
�n�J�ϥΪ̱b����A��"su -"���O�������޲z��root</br>
��"useradd (username)"�إ߷s�b���B"passwd (username)"�]�w�K�X</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-1.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-1.2.PNG?raw=true)</br>
## �ЧR���t�Τ��� examuser3 �o�ӱb���A�P�ɱN�o�ӱb�����a�ؿ��P�l���ɮצP�B�R���C</br>
��"userdel -r (username)"�R���ϥΪ̪��a�ؿ��θ��</br>
**�`�N:**�S���[�W-r�a�ؿ����|�R��</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-2.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-2.2.PNG?raw=true)</br> 
## examuser1 ���p�߳Q�޲z���R���F�A���O�o�ӱb�����a�ؿ��P�����l���٦s�b�C�аѦҳo�ӱb���i�઺�a�ؿ��ҫO�d�� UID �P GID�A �ù��եH�ӱb���즳�� UID/GID ��T�ӭ��ظӱb��</br>
��"useradd -u (��b����UID) (username)"���رb��</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-3.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/1-3.2.PNG?raw=true)</br>
# 2</br>
## �إ�examuser4�ϥΪ̱b���A�K�X���N</br>
�n�J�ϥΪ̱b����A��"su -"���O�������޲z��root</br>
��"useradd (username)"�إ߷s�b���B"passwd (username)"�]�w�K�X</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/2-1.1.PNG?raw=true)</br>
## �ϥ� root �N /etc/securetty �ƻs�� examuser4�A�B�o�ӱb���n�������ϥθ��ɮפ~��A(�Y���Ҧ����v��)</br>
����"cp"�ƻs�ɮסA�M���"chgrp"�ק�s�աA�̫��"chmod"�ק��v��</br>
[�Ʀr�k�Gr=4,w=2,x=1 ��n�����v���Ʀr�ۥ[]</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/2-2.1.PNG?raw=true)</br>
## �إߤ@�ӦW�� /examdata/change.txt �����ɮסA�o���ɮת��֦��̬� sshd�A�֦��s�լ� users�Asshd �iŪ�i�g�Ausers �s�զ����iŪ�A ��L�H�S�v���C�B�o���ɮת��ק����нվ㦨 2012 �~ 12 �� 21 �� (������T�Y�i�A�ɶ��H�K)</br>
����"mkdir"�إ߸�Ƨ��A�A��"touch"�إ��ɮ�</br>
�H���"chown"���֦��̡A"chgrp"���s�աA"chmod"�ק��v��</br>
�̫�A��"touch -d (time) (�ɮצW��)"�ק�ɶ��A�o�˴N�i�H�F</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/2-3.1.PNG?raw=true)</br>
# 3</br>
## �Шϥ� root �������إߩ��U���ɮ׻P�v���G</br>
drwxrwxr-x  root root /dev/shm/unit05/</br>
drwxr-xr--  root root /dev/shm/unit05/dir1/</br>
-rw-r--r--  root root /dev/shm/unit05/dir1/file1 (�ƻs�Ӧ� /etc/hosts)</br>
drwxr-x--x  root root /dev/shm/unit05/dir2/</br>
-rw-r--r--  root root /dev/shm/unit05/dir2/file2 (�ƻs�Ӧ� /etc/hosts)</br>
drwxr-xr-x  root root /dev/shm/unit05/dir3/</br>
-rw-rw-rw-  root root /dev/shm/unit05/dir3/file3 (�ƻs�Ӧ� /etc/hosts)</br>
drwxrwxrwx  root root /dev/shm/unit05/dir4/</br>
-rw-------  root root /dev/shm/unit05/dir4/file4 (�ƻs�Ӧ� /etc/hosts)</br>
</br></br>
��"mkdir"�إ߸�Ƨ��A"touch"�إ��ɮסA"cp"�ƻs�A"chmod"�ק��v��</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-1.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-1.2.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-1.3.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-1.4.PNG?raw=true)</br>
## �ϥΤ@��ϥΪ� �������i��U���u�@�G</br>
��"su (username)"���^�ϥΪ�</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-2.PNG)</br>
## �Шϥ� ls -l /dev/shm/unit05/dir[1-4] �̾ڿ�X�����G��������|���ͳo�ǰ��D�H</br>
dir1����L�H�ϥ��v���� r--�A���M�i�H�\Ū�A���ʥFx�v���A�G�������</br>
dir2����L�H�ϥ��v���� --x�A���M�i�H����A���ʥFr�v���A�G����d��</br>
dir3����L�H�ϥ��v���� r-x�A�P�ɾ֦��\Ū�ΰ����v���A�i�H���`����</br>
dir4����L�H�ϥ��v���� rwx�A�P�ɾ֦��\Ū�ΰ����v���A�i�H���`����</br>
## �Шϥ� ls -l /dev/shm/unit05/dir1/file1 �A�̧ǱN�W�z���ɦW�� dir1/file1 ~ dir4/file4 ����A�̾ڲ��ͪ����G��������|�p���H</br>
file1���v���ʥFx�A�]���L�k����</br>
file2-4��x�v���A�]���i�H���`����</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-3.1.PNG?raw=true)</br>
## �Шϥ� vim /dev/shm/unit05/dir1/file1 ~ vim /dev/shm/unit05/dir4/file4�A�����x�s (�αj���x�s)�A��������i�H/���i�H�x�s�H</br>
dir1   r--</br>
file1  r--  �]dir1�ʥFx�v���A�G�L�k����</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-1.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-1.2.PNG?raw=true)</br>
dir2   --x</br>
file2  r--  ���Mdir2�������v���A��file2�u��Ū�����v���A�]������}�ҩM�ק�</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-2.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-2.2.PNG?raw=true)</br>
dir3   r-x</br>
file3  rw-  �]dir3���\Ū�B�����v���A��file3��r��w�v���A�G�ॿ�`Ū���M�ק�</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-3.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-3.2.PNG?raw=true)</br>
dir4   rwx</br>
file4  ---  ���Mdir4�����v���A��file4�S�������v���A�]�����వ�����</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-4.1.PNG?raw=true)</br>
![image](https://github.com/bill0330/107-1-ntcu-linux/blob/HW-3/ACS107137/img/3-4-4.2.PNG?raw=true)</br>