/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface __UIAtomViewTextSelectionRect : UITextSelectionRect {

	BOOL containsStart;
	BOOL containsEnd;
	BOOL isVertical;
	long long writingDirection;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) BOOL containsStart; 
@property (assign,nonatomic) BOOL containsEnd; 
@property (assign,nonatomic) BOOL isVertical; 
-(CGRect)rect;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)containsEnd;
-(void)setRect:(CGRect)arg1 ;
-(void)setWritingDirection:(long long)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setIsVertical:(BOOL)arg1 ;
@end
