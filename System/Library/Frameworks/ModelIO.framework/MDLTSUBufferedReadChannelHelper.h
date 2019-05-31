/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLTSUStreamReadChannel.h>

@class MDLTSUBufferedReadChannel, NSString;

@interface MDLTSUBufferedReadChannelHelper : NSObject <MDLTSUStreamReadChannel> {

	MDLTSUBufferedReadChannel* _bufferedReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
-(id)init;
-(void)close;
@end
