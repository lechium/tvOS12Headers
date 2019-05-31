/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AVAssetExportSession, NSTimer, PLProgressView, PFVideoAVObjectBuilder;

@interface PLVideoRemaker : NSObject {

	NSString* _trimmedPath;
	double _duration;
	double _trimStartTime;
	double _trimEndTime;
	int _mode;
	AVAssetExportSession* _exportSession;
	float _percentComplete;
	NSTimer* _progressTimer;
	PLProgressView* _progressView;
	id _delegate;
	BOOL _shouldExportToPhotoDataDirectory;
	/*^block*/id _progressHandler;
	NSString* _exportPresetOverride;
	NSString* _customAccessibilityLabel;
	PFVideoAVObjectBuilder* __videoAVObjectBuilder;

}

@property (nonatomic,retain,readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;              //@synthesize _videoAVObjectBuilder=__videoAVObjectBuilder - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldExportToPhotoDataDirectory;                                //@synthesize shouldExportToPhotoDataDirectory=_shouldExportToPhotoDataDirectory - In the implementation block
@property (nonatomic,copy) NSString * exportPresetOverride;                                        //@synthesize exportPresetOverride=_exportPresetOverride - In the implementation block
@property (nonatomic,readonly) NSString * exportPreset; 
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                    //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
+(long long)fileLengthLimitForRemakerMode:(int)arg1 ;
+(int)getSDRemakerModeForMode:(int)arg1 ;
+(long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2 ;
+(int)getHDRemakerModeForMode:(int)arg1 ;
+(double)maximumDurationForTrimMode:(int)arg1 ;
-(id)_metadata;
-(double)trimStartTime;
-(double)trimEndTime;
-(void)setTrimStartTime:(double)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(BOOL)arg2 ;
-(NSString *)exportPreset;
-(void)setExportPresetOverride:(NSString *)arg1 ;
-(void)remake;
-(void)_exportCompletedWithSuccess:(BOOL)arg1 ;
-(PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
-(id)initWithPublishingMedia:(id)arg1 ;
-(id)messageForRemakingProgress;
-(NSString *)exportPresetOverride;
-(BOOL)shouldExportToPhotoDataDirectory;
-(id)_fileFormatForURL:(id)arg1 ;
-(void)_resetProgressTimer;
-(void)_removeProgressTimer;
-(void)_didEndRemakingWithTemporaryPath:(id)arg1 ;
-(void)setShouldExportToPhotoDataDirectory:(BOOL)arg1 ;
-(NSString *)customAccessibilityLabel;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(id)progressHandler;
-(void)_updateProgress;
-(id)progressView;
-(id)initWithAVAsset:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)cancel;
-(void)setProgressHandler:(id)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end

