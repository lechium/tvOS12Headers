/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@protocol MLCustomLayer;
@class NSString, NSObject;

@interface MLCustomLayerWrapper : NSObject <EspressoBrick> {

	NSString* _className;
	NSObject*<MLCustomLayer> _customImpl;

}

@property (nonatomic,readonly) NSString * className;                           //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSObject*<MLCustomLayer> customImpl;              //@synthesize customImpl=_customImpl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)espressoShapeToCoremlShape:(id)arg1 ;
+(id)coremlShapeToEspressoShape:(id)arg1 ;
+(id)getStrides:(id)arg1 ;
+(id)espressoTensorToCoremlTensor:(id)arg1 ;
+(id)espressoShapesToCoremlShapes:(id)arg1 ;
+(id)coremlShapesToEspressoShapes:(id)arg1 ;
+(id)espressoTensorsToCoremlTensors:(id)arg1 ;
+(int)intFromFourBytes:(char*)arg1 ;
+(id)espressoTensorsToCoremlTensorsGPU:(id)arg1 ;
+(id)factory;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3 ;
-(NSObject*<MLCustomLayer>)customImpl;
-(void)setCustomImpl:(NSObject*<MLCustomLayer>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(NSString *)className;
@end

