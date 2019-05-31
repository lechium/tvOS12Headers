/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIPattern : NSObject {

	CGImageRef _patternImage;
	CGPatternRef _pattern;
	double _alpha;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(CGPatternRef)pattern;
-(CGPatternRef)_newPattern;
-(id)initWithImageRef:(CGImageRef)arg1 ;
-(void)setPatternInContext:(CGContextRef)arg1 ;
-(CGImageRef)patternImageRef;
-(void)dealloc;
-(id)description;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
@end

