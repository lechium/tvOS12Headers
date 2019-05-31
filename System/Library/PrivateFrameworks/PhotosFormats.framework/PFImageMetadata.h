/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFImageMetadata : NSObject
+(id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 ;
+(BOOL)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 value:(id*)arg4 error:(id*)arg5 ;
+(id)imagePropertiesByRemovingKey:(const void*)arg1 dictionaryKey:(const void*)arg2 fromImageProperties:(id)arg3 ;
+(BOOL)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id*)arg4 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
@end
