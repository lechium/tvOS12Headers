/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCoding;
@interface MSObjectWrapper : NSObject {

	long long _size;
	long long _uniqueID;
	id<NSObject><NSCoding> _object;
	int _errorCount;

}

@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long uniqueID;                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) id<NSCoding> object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)wrapperWithObject:(id)arg1 size:(long long)arg2 ;
+(id)objectsFromWrappers:(id)arg1 ;
+(long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2 ;
+(id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2 ;
-(void)setUniqueID:(long long)arg1 ;
-(long long)uniqueID;
-(id)initWithObject:(id)arg1 size:(long long)arg2 ;
-(long long)size;
-(id<NSCoding>)object;
-(void)setSize:(long long)arg1 ;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
@end

