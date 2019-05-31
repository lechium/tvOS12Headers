/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject <NSMutableCopying> {

	NSString* _title;
	NSString* _prompt;
	MRTextInputTraits _inputTraits;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * prompt;                          //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) MRTextInputTraits inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(MRTextInputTraits)inputTraits;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)prompt;
@end

