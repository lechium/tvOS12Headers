/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;
@class NSMutableArray, NSObject;

@interface UITextPasteCoordinator : NSObject {

	NSMutableArray* _items;
	NSObject*<OS_dispatch_group> _wait;
	id<UITextPasteCoordinatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<UITextPasteCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UITextPasteCoordinatorDelegate>)delegate;
-(void)addItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_determineFinished;
-(void)_finish;
-(void)setResult:(id)arg1 forItem:(id)arg2 ;
-(BOOL)performBlockingWait:(double)arg1 ;
@end

