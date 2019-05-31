/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap; 
@property (copy) NSArray * interpolations; 
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(NSArray *)interpolations;
-(void)setInterpolations:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setColorMap:(id)arg1 ;
-(id)colorMap;
-(CGPoint)endPoint;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(void)setLocations:(NSArray *)arg1 ;
@end

