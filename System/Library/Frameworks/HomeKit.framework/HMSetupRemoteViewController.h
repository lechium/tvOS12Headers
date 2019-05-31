/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>

@protocol HMSetupRemoteHost;
@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost> {

	id<HMSetupRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMSetupRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
-(void)setDelegate:(id<HMSetupRemoteHost>)arg1 ;
-(id<HMSetupRemoteHost>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

