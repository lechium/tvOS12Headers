/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString, NSMutableArray;

@interface CIBurstImageStat : NSObject {

	float normalizedFocusScore;
	float normalizedSigma;
	float colorHistogram[1024];
	int numEntries;
	unsigned short aeMatrix[256];
	int dissimilarity;
	double timeReceived;
	double timestamp;
	void* projectionMemoryBlock;
	FastRegistration_Signatures* projectionSignature;
	SharpnessGridElement_t* sharpnessGrid;
	int gridWidth;
	int gridHeight;
	GridROI_t gridROI;
	GridROI_t smoothedROI;
	BOOL hasRegistrationData;
	float maxSkewness;
	float roiSize;
	BOOL exclude;
	BOOL AEStable;
	BOOL AFStable;
	BOOL emotionallyRejected;
	BOOL doLimitedSharpnessAndBlur;
	BOOL isGarbage;
	int orientation;
	int AEAverage;
	int AETarget;
	int temporalOrder;
	float avgHorzDiffY;
	float blurExtent;
	float imageScore;
	float actionScore;
	float registrationErrorX;
	float registrationErrorY;
	float registrationErrorIntegral;
	float actionClusteringScore;
	int numHWFaces;
	float tx;
	float ty;
	int _AEDelta;
	int _fullsizeJpegSize;
	int _version;
	NSString* imageId;
	NSMutableArray* faceStatArray;
	IOSurfaceRef _fullsizeJpegData;
	CGRect facesRoiRect;

}

@property (assign) NSString * imageId; 
@property (assign) int orientation; 
@property (assign) NSMutableArray * faceStatArray; 
@property (assign) BOOL exclude; 
@property (assign) BOOL AEStable; 
@property (assign) int AEAverage; 
@property (assign) int AETarget; 
@property (assign) BOOL AFStable; 
@property (assign) int temporalOrder; 
@property (assign) float avgHorzDiffY; 
@property (assign) float blurExtent; 
@property (assign) float imageScore; 
@property (assign) float actionScore; 
@property (assign) double timeReceived; 
@property (assign) double timestamp; 
@property (assign) float maxSkewness; 
@property (assign) float registrationErrorX; 
@property (assign) float registrationErrorY; 
@property (assign) float registrationErrorIntegral; 
@property (assign) float actionClusteringScore; 
@property (assign) BOOL hasRegistrationData; 
@property (assign) CGRect facesRoiRect; 
@property (assign) int numHWFaces; 
@property (assign) BOOL emotionallyRejected; 
@property (assign) BOOL doLimitedSharpnessAndBlur; 
@property (assign) float tx; 
@property (assign) float ty; 
@property (assign) BOOL isGarbage; 
@property (assign) float roiSize; 
@property (assign) int AEDelta;                                  //@synthesize AEDelta=_AEDelta - In the implementation block
@property (assign) IOSurfaceRef fullsizeJpegData;                //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) int fullsizeJpegSize;                         //@synthesize fullsizeJpegSize=_fullsizeJpegSize - In the implementation block
@property (assign) int version;                                  //@synthesize version=_version - In the implementation block
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(int)fullsizeJpegSize;
-(void)setFullsizeJpegSize:(int)arg1 ;
-(NSMutableArray *)faceStatArray;
-(int)temporalOrder;
-(void)setFacesRoiRect:(CGRect)arg1 ;
-(void)setNumHWFaces:(int)arg1 ;
-(CGRect)facesRoiRect;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(void)setFaceStatArray:(NSMutableArray *)arg1 ;
-(void)setMaxSkewness:(float)arg1 ;
-(void)setHasRegistrationData:(BOOL)arg1 ;
-(GridROI_t)getSharpnessAndBlurLimits;
-(int)AEAverage;
-(void)setAEDelta:(int)arg1 ;
-(float)maxSkewness;
-(void)setRegistrationErrorX:(float)arg1 ;
-(void)setRegistrationErrorY:(float)arg1 ;
-(void)setRegistrationErrorIntegral:(float)arg1 ;
-(float)registrationErrorIntegral;
-(void)setActionClusteringScore:(float)arg1 ;
-(void)updateROI:(GridROI_t)arg1 ;
-(void)computeImageColorHistogram:(id)arg1 ;
-(void)computeImageSharpnessOnGrid:(id)arg1 ;
-(void)computeBlurStatsOnGrid:(id)arg1 ;
-(void)computeImageProjections:(id)arg1 ;
-(float)computeFacialFocusScoreSum;
-(void)allocateMeanStdPingPongBuffers:(float*)arg1 :(float*)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)assignMeanStdBuffers:(float*)arg1 ;
-(float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2 ;
-(void)flagAsGarbage;
-(void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3 ;
-(int)canRegister;
-(void)writeGridROI:(id)arg1 ;
-(void)computeImageData:(id)arg1 faceIDCounts:(id)arg2 ;
-(void)collapseSharpnessGrid;
-(float)computeRuleOfThreeDistance;
-(float)computeSmilePercentage;
-(float)computeImageDistance:(id)arg1 ;
-(float)computeAEMatrixDifference:(id)arg1 ;
-(int)setAEMatrix:(id)arg1 ;
-(void)computeAEMatrix:(id)arg1 ;
-(unsigned short*)aeMatrix;
-(float)computeScore:(float)arg1 ;
-(long long)compareImageStats:(id)arg1 ;
-(long long)compareImageOrder:(id)arg1 ;
-(float*)colorHistogram;
-(BOOL)exclude;
-(void)setExclude:(BOOL)arg1 ;
-(BOOL)AEStable;
-(void)setAEStable:(BOOL)arg1 ;
-(void)setAEAverage:(int)arg1 ;
-(int)AETarget;
-(void)setAETarget:(int)arg1 ;
-(BOOL)AFStable;
-(void)setAFStable:(BOOL)arg1 ;
-(void)setTemporalOrder:(int)arg1 ;
-(float)avgHorzDiffY;
-(void)setAvgHorzDiffY:(float)arg1 ;
-(float)blurExtent;
-(void)setBlurExtent:(float)arg1 ;
-(float)imageScore;
-(void)setImageScore:(float)arg1 ;
-(float)actionScore;
-(void)setActionScore:(float)arg1 ;
-(double)timeReceived;
-(void)setTimeReceived:(double)arg1 ;
-(float)registrationErrorX;
-(float)registrationErrorY;
-(BOOL)hasRegistrationData;
-(float)actionClusteringScore;
-(int)numHWFaces;
-(BOOL)emotionallyRejected;
-(void)setEmotionallyRejected:(BOOL)arg1 ;
-(BOOL)doLimitedSharpnessAndBlur;
-(void)setDoLimitedSharpnessAndBlur:(BOOL)arg1 ;
-(float)tx;
-(void)setTx:(float)arg1 ;
-(float)ty;
-(void)setTy:(float)arg1 ;
-(BOOL)isGarbage;
-(void)setIsGarbage:(BOOL)arg1 ;
-(float)roiSize;
-(void)setRoiSize:(float)arg1 ;
-(int)AEDelta;
-(void)dealloc;
-(double)timestamp;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(int)orientation;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setOrientation:(int)arg1 ;
@end
