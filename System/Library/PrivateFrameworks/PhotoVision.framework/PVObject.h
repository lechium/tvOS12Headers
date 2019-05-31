/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PVObject : NSObject <NSCopying> {

	NSString* _localIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
-(id)initWithLocalIdentifier:(id)arg1 ;
-(NSString *)localIdentifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

