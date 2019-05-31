/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@protocol UINamedLayerStack;
@class UIImage, NSArray, NSString;

@interface TVNamedLayerStack : NSObject <UINamedLayerStack> {

	id<UINamedLayerStack> _layerStack;
	UIImage* _cornerRadiusFlatImage;
	UIImage* _originalImage;
	NSArray* _replacementLayers;

}

@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                  //@synthesize layerStack=_layerStack - In the implementation block
@property (nonatomic,retain) UIImage * cornerRadiusFlatImage;                   //@synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy) NSArray * replacementLayers;                         //@synthesize replacementLayers=_replacementLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
+(id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2 decodeLayerImagesImmediately:(BOOL)arg3 ;
+(id)namedLayerStackProxyFromLayerStack:(id)arg1 layers:(id)arg2 cornerRadiusFlatImage:(id)arg3 ;
+(id)namedLayerStackProxyFromLayerStack:(id)arg1 cornerRadiusFlatImage:(id)arg2 ;
+(id)namedLayerStackWithLayers:(id)arg1 cornerRadiusFlatImage:(id)arg2 ;
+(id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2 ;
-(UIImage *)originalImage;
-(void)setCornerRadiusFlatImage:(UIImage *)arg1 ;
-(void)setReplacementLayers:(NSArray *)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(NSArray *)replacementLayers;
-(UIImage *)cornerRadiusFlatImage;
-(CGSize)size;
-(id)init;
-(NSString *)name;
-(double)scale;
-(NSArray *)layers;
-(id)_init;
-(CGImageRef)flattenedImage;
-(BOOL)flatImageContainsCornerRadius;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(id<UINamedLayerStack>)layerStack;
@end

