/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO {

	unsigned long long _width;
	float _spacing;
	_UIPointVector* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(void)dealloc;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(void)setSpacing:(float)arg1 ;
-(void)addPoint:;
-(void)flush;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(float)spacing;
@end

