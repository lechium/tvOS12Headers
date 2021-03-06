/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <TVSystemUI/TVSUIViewServiceHostInterface.h>

@protocol TVSUIRemoteHostViewControllerDelegate;
@class NSString;

@interface TVSUIRemoteHostViewController : _UIRemoteViewController <TVSUIViewServiceHostInterface> {

	id<TVSUIRemoteHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVSUIRemoteHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)_sendItems:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<TVSUIRemoteHostViewControllerDelegate>)arg1 ;
-(id<TVSUIRemoteHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

