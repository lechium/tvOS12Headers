/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)enabled;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)_ensureCustomLogFile;
-(id)initWithFilename:(id)arg1 ;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
@end
