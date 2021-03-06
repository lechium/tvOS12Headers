/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSArray;

@interface HMDArrayWrapper : HMDFieldWrapper {

	NSArray* _field;
	/*^block*/id _objectCreator;

}

@property (nonatomic,retain) NSArray * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,copy) id objectCreator;               //@synthesize objectCreator=_objectCreator - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 objectCreator:(/*^block*/id)arg3 ;
-(void)setField:(NSArray *)arg1 ;
-(void)setObjectCreator:(id)arg1 ;
-(id)objectCreator;
-(NSArray *)field;
@end

