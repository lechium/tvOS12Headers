/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RUISelectOption : NSObject {

	NSString* _label;
	NSString* _value;

}

@property (nonatomic,retain) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(id)description;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
