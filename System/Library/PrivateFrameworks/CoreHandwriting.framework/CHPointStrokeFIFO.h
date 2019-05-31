/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;
	CHDrawing* _drawing;

}

@property (nonatomic,retain) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,retain) CHDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(CHDrawing *)drawing;
-(void)setDrawing:(CHDrawing *)arg1 ;
-(void)dealloc;
-(void)clear;
-(void)addPoint:;
-(void)flush;
-(id)initWithFIFO:(id)arg1 ;
-(void)setStrokes:(CHDrawing *)arg1 ;
-(CHDrawing *)strokes;
@end

