/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSDictionary, NSData, _MRVoiceInputDeviceDescriptorProtobuf;

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying> {

	NSArray* _supportedFormats;
	NSDictionary* _defaultFormat;

}

@property (nonatomic,readonly) NSArray * supportedFormats;                                    //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultFormat;                                  //@synthesize defaultFormat=_defaultFormat - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) _MRVoiceInputDeviceDescriptorProtobuf * protobuf; 
-(NSArray *)supportedFormats;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)initWithProtobuf:(id)arg1 ;
-(_MRVoiceInputDeviceDescriptorProtobuf *)protobuf;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSDictionary *)defaultFormat;
-(id)initWithData:(id)arg1 ;
@end
