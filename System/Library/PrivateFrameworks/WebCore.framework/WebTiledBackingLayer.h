/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(TiledBacking*)tiledBacking;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)invalidate;
-(void)setNeedsDisplay;
-(void)setContentsScale:(double)arg1 ;
-(BOOL)isOpaque;
-(id)initWithLayer:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(double)contentsScale;
-(id)actionForKey:(id)arg1 ;
-(BOOL)drawsAsynchronously;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
@end

