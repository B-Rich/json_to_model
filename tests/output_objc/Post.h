// Generated by json_to_model

#import <Foundation/Foundation.h>
#import "Reply.h"
#import "User.h"


@interface Post : NSObject

- (id)initWithJSONData:(NSData *)data;
- (id)initWithJSONDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)JSONDictionary;
- (NSData *)JSONData;


@property (nonatomic, copy) NSString * title;

@property (nonatomic, strong) NSArray * replies;

@property (nonatomic, copy) NSString * summary;

@property (nonatomic, strong) User * user;

@property (nonatomic, assign) NSInteger time;

@property (nonatomic, assign) NSInteger ID;


@end
