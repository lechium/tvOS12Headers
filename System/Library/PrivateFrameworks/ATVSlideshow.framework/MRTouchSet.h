/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface MRTouchSet : NSObject {

	NSMutableSet* _touches;
	NSMutableDictionary* _touchesForUITouches;

}

@property (readonly) NSSet * touches;               //@synthesize touches=_touches - In the implementation block
@property (readonly) CGPoint centroid; 
@property (readonly) double scale; 
@property (readonly) double rotation; 
@property (readonly) BOOL isActive; 
-(id)initWithTouch:(id)arg1 ;
-(void)addTouch:(id)arg1 ;
-(void)removeTouch:(id)arg1 ;
-(void)removeAllTouches;
-(id)initWithTouches:(id)arg1 ;
-(void)cancelAllTouches;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 ;
-(void)updateWithUITouches:(id)arg1 inView:(id)arg2 ;
-(void)dealloc;
-(double)scale;
-(id)description;
-(BOOL)isActive;
-(double)rotation;
-(NSSet *)touches;
-(CGPoint)centroid;
@end
