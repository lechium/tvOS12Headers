/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) DACoreDAVLogger * curLogger;              //@synthesize curLogger=_curLogger - In the implementation block
+(id)instance;
-(void)logString:(id)arg1 ;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(id)init;
-(BOOL)enabled;
@end

