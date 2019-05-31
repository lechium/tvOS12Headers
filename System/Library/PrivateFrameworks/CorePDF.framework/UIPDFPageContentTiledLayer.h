/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CATiledLayer.h>
#import <UIKit/UIPDFSelectionLayer.h>

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {

	CALayer* _selectionLayer;

}
-(void)setSelectionNeedsDisplay;
-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsDisplay;
-(void)layoutSublayers;
@end

