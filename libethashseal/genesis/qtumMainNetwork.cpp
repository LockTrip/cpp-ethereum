/*
		This file is part of cpp-ethereum.

		cpp-ethereum is free software: you can redistribute it and/or modify
		it under the terms of the GNU General Public License as published by
		the Free Software Foundation, either version 3 of the License, or
		(at your option) any later version.

		cpp-ethereum is distributed in the hope that it will be useful,
		but WITHOUT ANY WARRANTY; without even the implied warranty of
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		GNU General Public License for more details.

		You should have received a copy of the GNU General Public License
		along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "../GenesisInfo.h"

static dev::h256 const c_genesisStateRootQtumMainNetwork("2ebd2f054ed409f4bc77921ce642517eb574470c01772dc26658d016a4ccc825");
static std::string const c_genesisInfoQtumMainNetwork = std::string() +
R"E(
{
	"sealEngine": "Ethash",
	"params": {
		"accountStartNonce": "0x00",
		"homesteadForkBlock": "0x00",
		"daoHardforkBlock": "0xfffffffffffffff",
		"EIP150ForkBlock": "0x00",
		"EIP158ForkBlock": "0x00",
		"byzantiumForkBlock": "QIP7_STARTING_BLOCK",
		"constantinopleForkBlock": "QIP7_STARTING_BLOCK",
        "constantinopleFixForkBlock": "QIP7_STARTING_BLOCK",
		"networkID" : "0x01",
		"chainID": "0x01",
		"maximumExtraDataSize": "0x20",
		"tieBreakingGas": false,
		"minGasLimit": "0x1388",
		"maxGasLimit": "7fffffffffffffff",
		"gasLimitBoundDivisor": "0x0400",
		"minimumDifficulty": "0x020000",
		"difficultyBoundDivisor": "0x0800",
		"durationLimit": "0x0d",
		"blockReward": "0x4563918244F40000"
	},
	"genesis": {
		"nonce": "0x0000000000000042",
		"difficulty": "0x400000000",
		"mixHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
		"author": "0x0000000000000000000000000000000000000000",
		"timestamp": "0x00",
		"parentHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
		"extraData": "0x5174756d4d61696e4e6574c9987fd35877cdbbbb84ffeb5315ab1f86c21398c0",
		"gasLimit": "0x1388"
	},
	"accounts": {
		"0000000000000000000000000000000000000001": { "precompiled": { "name": "ecrecover", "linear": { "base": 3000, "word": 0 } } },
		"0000000000000000000000000000000000000002": { "precompiled": { "name": "sha256", "linear": { "base": 60, "word": 12 } } },
		"0000000000000000000000000000000000000003": { "precompiled": { "name": "ripemd160", "linear": { "base": 600, "word": 120 } } },
		"0000000000000000000000000000000000000004": { "precompiled": { "name": "identity", "linear": { "base": 15, "word": 3 } } },
		"0000000000000000000000000000000000000005": { "precompiled": { "name": "modexp", "startingBlock": "QIP7_STARTING_BLOCK" } },
		"0000000000000000000000000000000000000006": { "precompiled": { "name": "alt_bn128_G1_add", "startingBlock": "QIP7_STARTING_BLOCK", "linear": { "base": 500, "word": 0 } } },
		"0000000000000000000000000000000000000007": { "precompiled": { "name": "alt_bn128_G1_mul", "startingBlock": "QIP7_STARTING_BLOCK", "linear": { "base": 40000, "word": 0 } } },
		"0000000000000000000000000000000000000008": { "precompiled": { "name": "alt_bn128_pairing_product", "startingBlock": "QIP7_STARTING_BLOCK" } },
		"0000000000000000000000000000000000000085": { "precompiled": { "name": "btc_ecrecover", "startingBlock": "QIP6_STARTING_BLOCK", "linear": { "base": 3000, "word": 0 } } },
        "0000000000000000000000000000000000000090": { "code":"0x608060405260043610610057576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff1680636d55b6e91461005c578063cb8a44b6146100df578063ee33d19c14610188575b600080fd5b34801561006857600080fd5b5061009d600480360381019080803573ffffffffffffffffffffffffffffffffffffffff1690602001909291905050506101eb565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b3480156100eb57600080fd5b50610186600480360381019080803590602001908201803590602001908080602002602001604051908101604052809392919081815260200183836020028082843782019150505050505091929192908035906020019082018035906020019080806020026020016040519081016040528093929190818152602001838360200280828437820191505050505050919291929050505061021e565b005b34801561019457600080fd5b506101e9600480360381019080803573ffffffffffffffffffffffffffffffffffffffff169060200190929190803573ffffffffffffffffffffffffffffffffffffffff169060200190929190505050610390565b005b60006020528060005260406000206000915054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60008151835114151561023057600080fd5b600090505b825181101561038b576000806000858481518110151561025157fe5b9060200190602002015173ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16141561037e5781818151811015156102e057fe5b9060200190602002015160008085848151811015156102fb57fe5b9060200190602002015173ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b8080600101915050610235565b505050565b6000808373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff1614151561042857600080fd5b806000808473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555050505600a165627a7a723058201dc5ea4ed990bcead45775bcb328e604a61448dc5ee4139fb12732ca1ab81f0a0029"},
        "0000000000000000000000000000000000000091": { "code":"0x606060405236156101cb576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff16806327748855146101d05780632aebcbb6146101f35780632fc78e4c146102025780633119c6851461023357806335dadbc61461025657806337cf568c1461027d57806340ce9a90146102c4578063429b62e5146102e75780634811b4b3146103325780634b9f5c98146103815780634eaecff11461039b578063512591f1146103be57806354a09f2c146103e15780635cfef6b8146104045780635e2cad7b1461042757806361e770f51461044a5780636436cc771461046d5780636df72ea91461049057806370eb3901146104c557806374498251146104f4578063796989e2146105175780637adbf9731461053e5780637d007f49146105715780637dc0d1d0146105945780637fd05e2a146105e35780639367965414610635578063a8a3996814610684578063bf3bd94b146106b5578063c1b49c89146106fa578063c94d6b171461072b578063d0ec5c151461074e578063d71ac15714610771578063e2c19c23146107a6578063e54f90db146107cd578063e8d36421146107f4578063f925d97614610817578063f9b137d71461083a575b610000565b34610000576101dd6108ed565b6040518082815260200191505060405180910390f35b34610000576102006108f3565b005b346100005761021d6004808035906020019091905050610dda565b6040518082815260200191505060405180910390f35b3461000057610240610df8565b6040518082815260200191505060405180910390f35b3461000057610263610dfd565b604051808215151515815260200191505060405180910390f35b34610000576102ae600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610e10565b6040518082815260200191505060405180910390f35b34610000576102d1610e28565b6040518082815260200191505060405180910390f35b3461000057610318600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610e2e565b604051808215151515815260200191505060405180910390f35b346100005761033f610e4e565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b61039960048080351515906020019091905050610e7c565b005b34610000576103a8610ee9565b6040518082815260200191505060405180910390f35b34610000576103cb610ef7565b6040518082815260200191505060405180910390f35b34610000576103ee610f05565b6040518082815260200191505060405180910390f35b3461000057610411610f13565b6040518082815260200191505060405180910390f35b3461000057610434610f1a565b6040518082815260200191505060405180910390f35b3461000057610457610f2f565b6040518082815260200191505060405180910390f35b346100005761047a610f3d565b6040518082815260200191505060405180910390f35b34610000576104ab6004808035906020019091905050610f44565b604051808215151515815260200191505060405180910390f35b34610000576104f26004808035906020019091908035906020019091908035906020019091905050610f6f565b005b3461000057610501611241565b6040518082815260200191505060405180910390f35b3461000057610524611247565b604051808215151515815260200191505060405180910390f35b346100005761056f600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190505061125f565b005b346100005761057e611380565b6040518082815260200191505060405180910390f35b34610000576105a161138e565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b3461000057610633600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506113b4565b005b34610000576106426114f5565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b346100005761069f6004808035906020019091905050611523565b6040518082815260200191505060405180910390f35b34610000576106f8600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919080359060200190919080359060200190919050506115fc565b005b346100005761071560048080359060200190919050506119a7565b6040518082815260200191505060405180910390f35b34610000576107386119bf565b6040518082815260200191505060405180910390f35b346100005761075b6119cd565b6040518082815260200191505060405180910390f35b346100005761078c60048080359060200190919050506119db565b604051808215151515815260200191505060405180910390f35b34610000576107b36119fb565b604051808215151515815260200191505060405180910390f35b34610000576107da611a0e565b604051808215151515815260200191505060405180910390f35b3461000057610801611a21565b6040518082815260200191505060405180910390f35b3461000057610824611a26565b6040518082815260200191505060405180910390f35b3461000057610847611a2c565b604051808a81526020018981526020018881526020018781526020018681526020018581526020018481526020018373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020018273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001995050505050505050505060405180910390f35b61546081565b6000600060011515600660009054906101000a900460ff16151514151561091957610000565b6007600301546007600201540143101561093257610000565b610945620f424060076006015402611523565b91508160076001015460076000015401101561096957610963611aa8565b50610dd5565b600760010154600760000154141561099557611680600760030160008282540192505081905550610dd4565b6007600101546007600001541115610dca5760016007600401541115610a0d5760076005015460036000600760040154815260200190815260200160002081905550600160046000600760040154815260200190815260200160002060006101000a81548160ff021916908315150217905550610dc9565b60006007600401541415610bd757600160026000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff021916908315150217905550600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1660405180807f6164644e657741646d696e286164647265737329000000000000000000000000815250601401905060405180910390207c01000000000000000000000000000000000000000000000000000000009004600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff166040518263ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019150506000604051808303816000876161da5a03f1925050501515610bd257610000565b610dc8565b60016007600401541415610dc7576007600101546007600001540190506009600a828115610000570402600760000154101515610dc657600060026000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff021916908315150217905550600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1660405180807f72656d6f766541646d696e286164647265737329000000000000000000000000815250601401905060405180910390207c01000000000000000000000000000000000000000000000000000000009004600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff166040518263ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019150506000604051808303816000876161da5a03f1925050501515610dc557610000565b5b5b5b5b5b610dd2611aa8565b505b5b5b5050565b6000600360008381526020019081526020016000205490505b919050565b602081565b600660029054906101000a900460ff1681565b60056020528060005260406000206000915090505481565b61168081565b60026020528060005260406000206000915054906101000a900460ff1681565b6000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1690505b90565b60011515600660009054906101000a900460ff161515141515610e9e57610000565b600115158115151415610ec35734600760000160008282540192505081905550610ee5565b600015158115151415610ee457346007600101600082825401925050819055505b5b5b50565b600060076002015490505b90565b600060076003015490505b90565b600060076004015490505b90565b620f424081565b60006007600301546007600201540190505b90565b600060076006015490505b90565b624c4b4081565b60006004600083815260200190815260200160002060009054906101000a900460ff1690505b919050565b60011515600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141515610fce57610000565b42615460600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205401111561101e57610000565b60011515600660009054906101000a900460ff161515141561103f57610000565b600283101561104d57610000565b600081141561105b57610000565b600660029054906101000a900460ff16151561107657610000565b60038314806110855750600483145b801561109c5750600082108061109b5750603282115b5b156110a657610000565b6008831415611164576000601083811561000057061415156110c757610000565b60208210806110d757506104b082115b156110e157610000565b6003600084815260200190815260200160002054821180156111185750601060036000858152602001908152602001600020548303115b1561112257610000565b6003600084815260200190815260200160002054821080156111595750601082600360008681526020019081526020016000205403115b1561116357610000565b5b42600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020819055506001600660006101000a81548160ff0219169083151502179055508260076004018190555081600760050181905550806007600301819055504360076002018190555033600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055506127106007600601819055505b505050565b61271081565b6000600660009054906101000a900460ff1690505b90565b60011515600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff1615151415156112be57610000565b60011515600660029054906101000a900460ff16151514156112df57610000565b6001600660026101000a81548160ff02191690831515021790555080600060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555080600160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b50565b600060076001015490505b90565b600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60011515600660019054906101000a900460ff16151514156113d557610000565b6001600660016101000a81548160ff0219169083151502179055506001600260008473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506001600260008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff02191690831515021790555061012c600360006002815260200190815260200160002081905550610fa060036000600781526020019081526020016000208190555060206003600060088152602001908152602001600020819055505b5050565b6000600760080160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1690505b90565b60006000600060006003600060028152602001908152602001600020549250600160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1663a035b1fe6000604051602001526040518163ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401809050602060405180830381600087803b156100005760325a03f11561000057505050604051805190509150828583028115610000570490508093505b505050919050565b60011515600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff16151514151561165b57610000565b42615460600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020540111156116ab57610000565b60011515600660009054906101000a900460ff16151514156116cc57610000565b60018111156116da57610000565b60008214156116e857610000565b600660029054906101000a900460ff16151561170357610000565b600160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1663c38b7e3f6000604051602001526040518163ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401809050602060405180830381600087803b156100005760325a03f115610000575050506040518051905015156117ad57610000565b60008114156118255761271060076006018190555060011515600260008573ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141561182057610000565b61189c565b600181141561189b57624c4b4060076006018190555060011515600260008573ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff16151514151561189a57610000565b5b5b42600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020819055506001600660006101000a81548160ff0219169083151502179055508060076004018190555082600760070160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff160217905550816007600301819055504360076002018190555033600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b505050565b60036020528060005260406000206000915090505481565b600060076000015490505b90565b600060076005015490505b90565b60046020528060005260406000206000915054906101000a900460ff1681565b600660009054906101000a900460ff1681565b600660019054906101000a900460ff1681565b601081565b6104b081565b60078060000154908060010154908060020154908060030154908060040154908060050154908060060154908060070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff16908060080160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff16905089565b60006000600660006101000a81548160ff021916908315150217905550600060076000018190555060006007600101819055506000600760020181905550600060076003018190555060006007600401819055506000600760070160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555060006007600501819055506000600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555060006007600601819055505b905600a165627a7a7230582071997043c8a7e34903aa9f85027dbe98ef7fb2f3d9f8e6524fff6905e66d15ce0029"},
        "0000000000000000000000000000000000000092": { "code":"0x60606040523615610126576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff16806301b057b11461012b5780630a1b10e1146101525780631785f53c14610185578063304171d9146101b857806337cf568c14610208578063429b62e51461024f5780635471e3e11461029a57806361d3b591146102c35780636e25128e146102ec5780636fed67e6146103155780637ba39fb31461033e5780637fd05e2a1461039b57806385d5f882146103ed578063891edcdb146104205780638bf61104146104705780639e65741e146104b7578063a035b1fe146104da578063bbaefe9f146104fd578063c38b7e3f14610520578063d19eaea114610547578063ef227b331461056a578063f8643d3b146105b9575b610000565b34610000576101386105e8565b604051808215151515815260200191505060405180910390f35b3461000057610183600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506105fb565b005b34610000576101b6600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190505061074f565b005b34610000576101f2600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919080359060200190919050506108b3565b6040518082815260200191505060405180910390f35b3461000057610239600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506108d8565b6040518082815260200191505060405180910390f35b3461000057610280600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506108f0565b604051808215151515815260200191505060405180910390f35b34610000576102a7610910565b604051808260ff1660ff16815260200191505060405180910390f35b34610000576102d0610915565b604051808260ff1660ff16815260200191505060405180910390f35b34610000576102f961091a565b604051808260ff1660ff16815260200191505060405180910390f35b346100005761032261091f565b604051808260ff1660ff16815260200191505060405180910390f35b34610000576103596004808035906020019091905050610924565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b34610000576103eb600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610961565b005b346100005761041e600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610ba7565b005b346100005761045a600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091908035906020019091905050610c87565b6040518082815260200191505060405180910390f35b34610000576104a1600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610cac565b6040518082815260200191505060405180910390f35b34610000576104c4610cc4565b6040518082815260200191505060405180910390f35b34610000576104e7610cca565b6040518082815260200191505060405180910390f35b346100005761050a610cd0565b6040518082815260200191505060405180910390f35b346100005761052d610cd6565b604051808215151515815260200191505060405180910390f35b3461000057610554610ce9565b6040518082815260200191505060405180910390f35b3461000057610577610cef565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b34610000576105e66004808035906020019091908035906020019091908035906020019091905050610d15565b005b600660009054906101000a900460ff1681565b600a60009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff1614151561065757610000565b6001600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff021916908315150217905550600580548060010182818154818355818115116106f8578183600052602060002091820191016106f791905b808211156106f35760008160009055506001016106db565b5090565b5b505050916000526020600020900160005b83909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff160217905550505b50565b600a60009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff161415156107ab57610000565b6000600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506000600360008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002081905550600160008273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002080604801906108ae91905b808211156108aa576000816000905550600101610892565b5090565b505b50565b6002602052816000526040600020816048811015610000570160005b91509150505481565b60046020528060005260406000206000915090505481565b60006020528060005260406000206000915054906101000a900460ff1681565b600581565b600581565b600581565b604881565b600581815481101561000057906000526020600020900160005b915054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60011515600660009054906101000a900460ff161515141561098257610000565b6001600660006101000a81548160ff0219169083151502179055506001600060008473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506001600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff02191690831515021790555060058054806001018281815481835581811511610a9657818360005260206000209182019101610a9591905b80821115610a91576000816000905550600101610a79565b5090565b5b505050916000526020600020900160005b84909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505060058054806001018281815481835581811511610b3257818360005260206000209182019101610b3191905b80821115610b2d576000816000905550600101610b15565b5090565b5b505050916000526020600020900160005b83909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505061012c600781905550610fa06008819055506305f5e1006009819055505b5050565b60011515600060003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141515610c0657610000565b60011515600660019054906101000a900460ff1615151415610c2757610000565b6001600660016101000a81548160ff02191690831515021790555080600a60006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b50565b6001602052816000526040600020816048811015610000570160005b91509150505481565b60036020528060005260406000206000915090505481565b60095481565b60075481565b60085481565b600660019054906101000a900460ff1681565b610e1081565b600a60009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b600060011515600060003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141515610d7657610000565b42610e10600460003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002054011115610dc657610000565b42600460003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000208190555060056007548115610000570460075401841115610e34576005600754811561000057046007540193505b60056007548115610000570460075403841015610e5e576005600754811561000057046007540393505b60056008548115610000570460085401831115610e88576005600854811561000057046008540192505b60056008548115610000570460085403831015610eb2576005600854811561000057046008540392505b6001841015610ec057600193505b6001831015610ece57600192505b600560ff16821015610edf57610000565b81600981905550604860ff16600360003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205481156100005706905083600160003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020826048811015610000570160005b508190555082600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020826048811015610000570160005b5081905550600360003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060008154809291906001019190505550611031611038565b5b50505050565b600060006000600060006000600060009650600095506000945060009350600092505b60058054905083101561135b576001151560006000600586815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141561134d5760009150600160480360ff1660036000600586815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205410151561119057604860ff16915061120b565b60036000600585815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205491505b600090505b8181101561134c5760016000600585815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b50548701965060026000600585815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b505485019450858060010196505083806001019450505b8080600101915050611210565b5b5b828060010193505061105b565b600560ff1686888115610000570411151561138057600560ff16600781905550611390565b8587811561000057046007819055505b600560ff168486811561000057041115156113b557600560ff166008819055506113c5565b8385811561000057046008819055505b5b505050505050505600a165627a7a72305820c7dff2c6a1af2bb82a976fcd249d8c2423515c57a99e676bb612cced5d4d15170029"}
	}
}
)E";
