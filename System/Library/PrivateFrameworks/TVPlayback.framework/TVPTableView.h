/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface TVPTableView : UITableView <UIGestureRecognizerDelegate> {

	NSIndexPath* _indexPathForDirectlyFocusedItem;
	UITapGestureRecognizer* _playButtonRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,nonatomic,__weak) id<TVPTableViewDelegate> delegate; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end
