/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface OSAAppleErrorReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) NSArray * notes;                 //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;              //@synthesize logfile=_logfile - In the implementation block
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(id)kernelVersionDescription;
+(id)bootArgs;
-(id)problemType;
-(id)hardwareModel;
-(BOOL)isAppleTV;
-(BOOL)saveToDir:(id)arg1 ;
-(NSString *)logfile;
-(BOOL)isInternalOrCarrierInstall;
-(id)incidentID;
-(BOOL)isActionable;
-(id)overrideFileExtension;
-(id)reportNamePrefix;
-(id)additionalIPSMetadata;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(BOOL)secondChanceToSylog;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(void)symlink:(id)arg1 ;
-(NSArray *)notes;
-(id)init;
-(BOOL)isInternalInstall;
-(BOOL)isCarrierInstall;
@end
