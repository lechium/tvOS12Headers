/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CrashReporterSupport/AppleErrorReport.h>

@class NSString;

@interface StructuredDataReport : AppleErrorReport {

	int _log_type;
	NSString* _raw_logfile;

}
-(void)generateCustomLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithType:(int)arg1 withFile:(id)arg2 ;
-(id)problemType;
-(BOOL)isActionable;
-(id)overrideFileExtension;
-(id)reportNamePrefix;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

