/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@protocol HMUserManagementRemoteHost;
@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {

	id<HMUserManagementRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMUserManagementRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setDelegate:(id<HMUserManagementRemoteHost>)arg1 ;
-(id<HMUserManagementRemoteHost>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

