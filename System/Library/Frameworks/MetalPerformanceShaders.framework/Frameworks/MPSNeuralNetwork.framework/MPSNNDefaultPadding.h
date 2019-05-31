/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNPadding.h>

@class NSString;

@interface MPSNNDefaultPadding : NSObject <MPSNNPadding> {

	unsigned long long _method;
	BOOL _mpsOwned;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paddingWithMethod:(unsigned long long)arg1 ;
+(id)paddingForTensorflowAveragePooling;
+(id)paddingForTensorflowAveragePoolingValidOnly;
+(BOOL)supportsSecureCoding;
-(unsigned long long)paddingMethod;
-(id)initWithPaddingMethod:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)label;
@end

