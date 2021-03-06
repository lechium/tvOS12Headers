/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSString, NSDictionary, NSArray;

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSString* _detectorType;
	NSDictionary* _detectorConfigurationOptions;
	NSArray* _originalRequestConfigurations;

}

@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSArray * originalRequestConfigurations;                  //@synthesize originalRequestConfigurations=_originalRequestConfigurations - In the implementation block
-(NSDictionary *)detectorConfigurationOptions;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(void)setOriginalRequestConfigurations:(NSArray *)arg1 ;
-(NSString *)detectorType;
-(NSArray *)originalRequestConfigurations;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

