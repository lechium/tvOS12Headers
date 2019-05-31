/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPTimeRange, TVImageProxy, NSString, TVPDateRange;

@interface TVPChapter : NSObject {

	TVPTimeRange* _timeRange;
	TVImageProxy* _imageProxy;
	NSString* _localizedName;
	NSString* _chapterDescription;
	TVPDateRange* _dateRange;

}

@property (nonatomic,copy) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * chapterDescription;              //@synthesize chapterDescription=_chapterDescription - In the implementation block
@property (nonatomic,retain) TVPTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) TVPDateRange * dateRange;                 //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                //@synthesize imageProxy=_imageProxy - In the implementation block
-(void)setTimeRange:(TVPTimeRange *)arg1 ;
-(TVPTimeRange *)timeRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setDateRange:(TVPDateRange *)arg1 ;
-(void)setChapterDescription:(NSString *)arg1 ;
-(TVPDateRange *)dateRange;
-(TVImageProxy *)imageProxy;
-(NSString *)chapterDescription;
-(NSString *)localizedName;
@end
