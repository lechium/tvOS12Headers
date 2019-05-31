/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopyingNSObject;
@interface PFCacheEntry : NSObject {

	id<NSCopying><NSObject> _key;
	id _value;
	unsigned long long _createTime;
	unsigned long long _lastReadTime;
	unsigned long long _readCount;

}
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)readCount;
-(unsigned long long)createTime;
-(unsigned long long)lastReadTime;
-(id)description;
-(id)value;
-(id)key;
-(void)touch;
@end
