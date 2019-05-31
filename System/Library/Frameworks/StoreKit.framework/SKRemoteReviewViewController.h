/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientReviewViewController.h>

@protocol SKRemoteReviewViewControllerDelegate;
@class SKStoreReviewViewController, NSString;

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {

	id<SKRemoteReviewViewControllerDelegate> _delegate;
	SKStoreReviewViewController* _reviewViewController;

}

@property (assign,nonatomic,__weak) id<SKRemoteReviewViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SKStoreReviewViewController * reviewViewController;              //@synthesize reviewViewController=_reviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(SKStoreReviewViewController *)reviewViewController;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setReviewViewController:(SKStoreReviewViewController *)arg1 ;
-(void)setDelegate:(id<SKRemoteReviewViewControllerDelegate>)arg1 ;
-(id<SKRemoteReviewViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end
