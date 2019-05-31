/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString;

@interface PASymbolSourceInfo : NSObject <PASerializable> {

	unsigned long long _offsetIntoSymbolOwner;
	unsigned long long _length;
	NSString* _fileName;
	unsigned _lineNumber;
	unsigned _columnNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * sourceFileName;                             //@synthesize fileName=_fileName - In the implementation block
@property (readonly) unsigned sourceFileLineNumber;                         //@synthesize lineNumber=_lineNumber - In the implementation block
@property (readonly) unsigned sourceFileColumnNumber;                       //@synthesize columnNumber=_columnNumber - In the implementation block
@property (readonly) unsigned long long offsetIntoSymbolOwner;              //@synthesize offsetIntoSymbolOwner=_offsetIntoSymbolOwner - In the implementation block
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
-(unsigned long long)offsetIntoSymbolOwner;
-(id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(BOOL)isEmptySourceInfo;
-(id)initWithCSSymbolOwner:(CSTypeRef)arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(id)initWithOffsetIntoSymbolOwner:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3 lineNumber:(unsigned)arg4 columnNumber:(unsigned)arg5 ;
-(NSString *)sourceFileName;
-(unsigned)sourceFileLineNumber;
-(unsigned)sourceFileColumnNumber;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSymbolSourceInfo:(const SCD_Struct_PA1*)arg1 ;
-(void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)length;
-(NSString *)debugDescription;
@end

