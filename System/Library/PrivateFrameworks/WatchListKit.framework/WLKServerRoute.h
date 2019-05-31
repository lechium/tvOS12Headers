/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface WLKServerRoute : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSString * HTTPMethod; 
@property (nonatomic,copy,readonly) NSString * endpointURLString; 
@property (nonatomic,readonly) BOOL requiresMescal; 
-(NSString *)HTTPMethod;
-(NSString *)endpointURLString;
-(BOOL)requiresMescal;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
