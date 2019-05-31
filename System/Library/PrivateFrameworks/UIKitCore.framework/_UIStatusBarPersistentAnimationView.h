/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSHashTable, NSArray;

@interface _UIStatusBarPersistentAnimationView : UIView {

	NSHashTable* _animations;

}

@property (nonatomic,retain) NSHashTable * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) NSArray * persistentAnimations; 
-(void)setAnimations:(NSHashTable *)arg1 ;
-(NSHashTable *)animations;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setPersistentAnimations:(NSArray *)arg1 ;
-(NSArray *)persistentAnimations;
@end
