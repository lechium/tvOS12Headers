/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidStart:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationsWillInstall:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)pluginsDidInstall:(id)arg1;
-(void)applicationsDidFailToInstall:(id)arg1;
-(void)applicationsWillUninstall:(id)arg1;
-(void)pluginsWillUninstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)pluginsDidUninstall:(id)arg1;
-(void)applicationsDidFailToUninstall:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)applicationStateDidChange:(id)arg1;
-(void)applicationIconDidChange:(id)arg1;
-(void)networkUsageChanged:(BOOL)arg1;
-(BOOL)observeLaunchProhibitedApps;
-(void)deviceManagementPolicyDidChange:(id)arg1;

@end

