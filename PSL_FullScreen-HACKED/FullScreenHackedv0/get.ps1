cd \;
(New-Object System.Net.Webclient).DownloadFile("http://image.cnsc8.com/tupian_201501/Big_Pic/nRz13KeMr5.jpg","c:\x.jpg");
Start-Sleep -Seconds 5;
reg add "HKEY_CURRENT_USER\Control Panel\Desktop" /v Wallpaper /d c:\x.jpg /f;RunDll32.exe USER32.DLL,UpdatePerUserSystemParameters;
taskkill /F /IM explorer.exe;
Start-Sleep -Seconds 5;
reg add "HKEY_CURRENT_USER\Control Panel\Desktop" /v Wallpaper /d c:\x.jpg /f;RunDll32.exe USER32.DLL,UpdatePerUserSystemParameters;
taskkill /F /IM explorer.exe;
Remove-Item get.ps1;
exit;