/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/VSViewServiceHostProtocol.h>

@protocol VSViewServiceRemoteViewControllerDelegate;
@class NSString;

@interface VSViewServiceRemoteViewController : _UIRemoteViewController <VSViewServiceHostProtocol> {

	id<VSViewServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSViewServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)_didCancelRequest:(id)arg1 ;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2 ;
-(void)_request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)_presentViewController;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<VSViewServiceRemoteViewControllerDelegate>)arg1 ;
-(id<VSViewServiceRemoteViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_dismissViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

