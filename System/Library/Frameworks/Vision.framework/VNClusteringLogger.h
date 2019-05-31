/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSURL, NSString;

@interface VNClusteringLogger : NSObject {

	BOOL _logEnabled;
	NSURL* _logFolderURL;
	NSURL* _logFileURL;
	NSString* _fileNameBase;

}

@property (readonly) NSURL * logFolderURL;                 //@synthesize logFolderURL=_logFolderURL - In the implementation block
@property (readonly) NSURL * logFileURL;                   //@synthesize logFileURL=_logFileURL - In the implementation block
@property (readonly) BOOL logEnabled;                      //@synthesize logEnabled=_logEnabled - In the implementation block
@property (readonly) NSString * fileNameBase;              //@synthesize fileNameBase=_fileNameBase - In the implementation block
+(id)currentDateTime;
+(void)appendString:(id)arg1 toLogFile:(id)arg2 ;
+(id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2 ;
+(BOOL)isLogEnabled;
-(void)resetFileNameURLWithCurentDateTime;
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 logFileNameBase:(id)arg3 ;
-(void)logString:(id)arg1 ;
-(void)logClusterMap:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 level:(id)arg2 ;
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 ;
-(void)logClusterMapL0:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(void)logClusterLookupMapL0:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(void)logClusterMapL1:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(void)logClusterLookupMapL1:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(NSURL *)logFolderURL;
-(NSURL *)logFileURL;
-(BOOL)logEnabled;
-(NSString *)fileNameBase;
@end

