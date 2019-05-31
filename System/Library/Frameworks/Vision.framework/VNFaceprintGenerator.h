/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceprintGenerator : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* m_FaceDescriptorImpl;
	shared_ptr<vision::mod::FaceFrontalizer>* m_FaceFrontalizerImpl;
	shared_ptr<vision::mod::ImageDescriptorAugmenterFlip>* m_DescriptorAugmenter;
	shared_ptr<unsigned char>* m_FaceFrontalizerWorkingBuffer;
	vImage_Buffer* m_FaceFrontalizerImageBuffer;
	Geometry2D_size2D_ m_RequiredImageSize;
	BOOL _useLowPriorityMode;
	unsigned long long _metalContextPriority;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;                            //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL useLowPriorityMode;                              //@synthesize useLowPriorityMode=_useLowPriorityMode - In the implementation block
@property (nonatomic,readonly) unsigned long long metalContextPriority; 
+(id)configurationOptionKeysForDetectorKey;
+(BOOL)shouldDumpDebugIntermediates;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)metalContextPriority;
-(void)printDebugInfoFor:(CVBufferRef)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(vImage_Buffer*)arg3 faceBBoxInLumaCropCoordinates:(Geometry2D_rect2D_)arg4 magnifiedBBoxInLumaCropCoordinates:(Geometry2D_rect2D_)arg5 ;
-(BOOL)useLowPriorityMode;
-(BOOL)isFaceprinterCompatibleWithFaceprinterCreatedWithOptions:(id)arg1 ;
-(unsigned long long)length;
@end

