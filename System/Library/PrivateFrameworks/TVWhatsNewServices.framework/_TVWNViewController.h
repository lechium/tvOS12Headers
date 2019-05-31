/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVWhatsNewServices.framework/TVWhatsNewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <TVWhatsNewServices/TVWNViewServiceInterface.h>

@class NSHashTable, NSString;

@interface _TVWNViewController : _UIRemoteViewController <TVWNViewServiceInterface> {

	BOOL _dismissalInProgressFlag;
	NSHashTable* _pendingDismissalCompletionBlocks;
	/*^block*/id _dismissResultHandler;
	/*^block*/id _terminationHandler;

}

@property (nonatomic,copy) id dismissResultHandler;                 //@synthesize dismissResultHandler=_dismissResultHandler - In the implementation block
@property (nonatomic,copy) id terminationHandler;                   //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)dismissWithResult:(id)arg1 ;
-(id)dismissResultHandler;
-(void)_sendViewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_parentViewControllerDismissAnimated:(BOOL)arg1 ;
-(void)prepareViewServiceWithOptions:(id)arg1 ;
-(void)messageViewServiceWithMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDismissResultHandler:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(id)terminationHandler;
@end

