/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldDumpDebugIntermediates;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
-(void)purgeIntermediates;
@end

