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
		"homsteadForkBlock": "0x00",
		"daoHardforkBlock": "0xfffffffffffffff",
		"EIP150ForkBlock": "0x00",
		"EIP158ForkBlock": "0x00",
		"metropolisForkBlock": "0xffffffffffffffffff",
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
		"blockReward": "0x4563918244F40000",
		"registrar" : ""
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
        "0000000000000000000000000000000000000090": { "code":
        "0x608060405260043610610057576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff1680636d55b6e91461005c578063cb8a44b6146100df578063ee33d19c14610188575b600080fd5b34801561006857600080fd5b5061009d600480360381019080803573ffffffffffffffffffffffffffffffffffffffff1690602001909291905050506101eb565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b3480156100eb57600080fd5b50610186600480360381019080803590602001908201803590602001908080602002602001604051908101604052809392919081815260200183836020028082843782019150505050505091929192908035906020019082018035906020019080806020026020016040519081016040528093929190818152602001838360200280828437820191505050505050919291929050505061021e565b005b34801561019457600080fd5b506101e9600480360381019080803573ffffffffffffffffffffffffffffffffffffffff169060200190929190803573ffffffffffffffffffffffffffffffffffffffff169060200190929190505050610390565b005b60006020528060005260406000206000915054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60008151835114151561023057600080fd5b600090505b825181101561038b576000806000858481518110151561025157fe5b9060200190602002015173ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16141561037e5781818151811015156102e057fe5b9060200190602002015160008085848151811015156102fb57fe5b9060200190602002015173ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b8080600101915050610235565b505050565b6000808373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff1614151561042857600080fd5b806000808473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555050505600a165627a7a723058201dc5ea4ed990bcead45775bcb328e604a61448dc5ee4139fb12732ca1ab81f0a0029"},
        "0000000000000000000000000000000000000091": { "code":
        "0x60606040523615610194576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff16806327748855146101995780632aebcbb6146101bc5780632fc78e4c146101cb57806337cf568c146101fc57806340ce9a9014610243578063429b62e5146102665780634811b4b3146102b15780634b9f5c98146103005780634eaecff11461031a578063512591f11461033d57806354a09f2c146103605780635cfef6b8146103835780635e2cad7b146103a657806361e770f5146103c95780636436cc77146103ec5780636df72ea91461040f57806370eb3901146104445780637449825114610473578063796989e2146104965780637d007f49146104bd5780637dc0d1d0146104e05780637fd05e2a1461052f5780639367965414610581578063a8a39968146105d0578063bf3bd94b14610601578063c1b49c8914610646578063c94d6b1714610677578063d0ec5c151461069a578063d71ac157146106bd578063e2c19c23146106f2578063e54f90db14610719578063f9b137d714610740575b610000565b34610000576101a66107f3565b6040518082815260200191505060405180910390f35b34610000576101c96107f9565b005b34610000576101e66004808035906020019091905050610ce0565b6040518082815260200191505060405180910390f35b346100005761022d600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610cfe565b6040518082815260200191505060405180910390f35b3461000057610250610d16565b6040518082815260200191505060405180910390f35b3461000057610297600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610d1c565b604051808215151515815260200191505060405180910390f35b34610000576102be610d3c565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b61031860048080351515906020019091905050610d6a565b005b3461000057610327610dd7565b6040518082815260200191505060405180910390f35b346100005761034a610de5565b6040518082815260200191505060405180910390f35b346100005761036d610df3565b6040518082815260200191505060405180910390f35b3461000057610390610e01565b6040518082815260200191505060405180910390f35b34610000576103b3610e08565b6040518082815260200191505060405180910390f35b34610000576103d6610e1d565b6040518082815260200191505060405180910390f35b34610000576103f9610e2b565b6040518082815260200191505060405180910390f35b346100005761042a6004808035906020019091905050610e32565b604051808215151515815260200191505060405180910390f35b34610000576104716004808035906020019091908035906020019091908035906020019091905050610e5d565b005b3461000057610480611056565b6040518082815260200191505060405180910390f35b34610000576104a361105c565b604051808215151515815260200191505060405180910390f35b34610000576104ca611074565b6040518082815260200191505060405180910390f35b34610000576104ed611082565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b346100005761057f600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506110a8565b005b346100005761058e611253565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b34610000576105eb6004808035906020019091905050611281565b6040518082815260200191505060405180910390f35b3461000057610644600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190803590602001909190803590602001909190505061135a565b005b34610000576106616004808035906020019091905050611583565b6040518082815260200191505060405180910390f35b346100005761068461159b565b6040518082815260200191505060405180910390f35b34610000576106a76115a9565b6040518082815260200191505060405180910390f35b34610000576106d860048080359060200190919050506115b7565b604051808215151515815260200191505060405180910390f35b34610000576106ff6115d7565b604051808215151515815260200191505060405180910390f35b34610000576107266115ea565b604051808215151515815260200191505060405180910390f35b346100005761074d6115fd565b604051808a81526020018981526020018881526020018781526020018681526020018581526020018481526020018373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020018273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001995050505050505050505060405180910390f35b61546081565b6000600060011515600660009054906101000a900460ff16151514151561081f57610000565b6007600301546007600201540143101561083857610000565b61084b620f424060076006015402611281565b91508160076001015460076000015401101561086f57610869611679565b50610cdb565b600760010154600760000154141561089b57611680600760030160008282540192505081905550610cda565b6007600101546007600001541115610cd057600160076004015411156109135760076005015460036000600760040154815260200190815260200160002081905550600160046000600760040154815260200190815260200160002060006101000a81548160ff021916908315150217905550610ccf565b60006007600401541415610add57600160026000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff021916908315150217905550600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1660405180807f6164644e657741646d696e286164647265737329000000000000000000000000815250601401905060405180910390207c01000000000000000000000000000000000000000000000000000000009004600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff166040518263ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019150506000604051808303816000876161da5a03f1925050501515610ad857610000565b610cce565b60016007600401541415610ccd576007600101546007600001540190506009600a828115610000570402600760000154101515610ccc57600060026000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff021916908315150217905550600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1660405180807f72656d6f766541646d696e286164647265737329000000000000000000000000815250601401905060405180910390207c01000000000000000000000000000000000000000000000000000000009004600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff166040518263ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019150506000604051808303816000876161da5a03f1925050501515610ccb57610000565b5b5b5b5b5b610cd8611679565b505b5b5b5050565b6000600360008381526020019081526020016000205490505b919050565b60056020528060005260406000206000915090505481565b61168081565b60026020528060005260406000206000915054906101000a900460ff1681565b6000600760070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1690505b90565b60011515600660009054906101000a900460ff161515141515610d8c57610000565b600115158115151415610db15734600760000160008282540192505081905550610dd3565b600015158115151415610dd257346007600101600082825401925050819055505b5b5b50565b600060076002015490505b90565b600060076003015490505b90565b600060076004015490505b90565b620f424081565b60006007600301546007600201540190505b90565b600060076006015490505b90565b624c4b4081565b60006004600083815260200190815260200160002060009054906101000a900460ff1690505b919050565b60011515600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141515610ebc57610000565b42615460600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002054011115610f0c57610000565b60011515600660009054906101000a900460ff1615151415610f2d57610000565b6002831015610f3b57610000565b6000811415610f4957610000565b6003831480610f585750600483145b8015610f6f57506000821080610f6e5750603282115b5b15610f7957610000565b42600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020819055506001600660006101000a81548160ff0219169083151502179055508260076004018190555081600760050181905550806007600301819055504360076002018190555033600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055506127106007600601819055505b505050565b61271081565b6000600660009054906101000a900460ff1690505b90565b600060076001015490505b90565b600060009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60011515600660019054906101000a900460ff16151514156110c957610000565b6001600660016101000a81548160ff0219169083151502179055506001600260008473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506001600260008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506103e86003600060028152602001908152602001600020819055506103e86003600060078152602001908152602001600020819055506092600160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055506092600060006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b5050565b6000600760080160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1690505b90565b60006000600060006003600060028152602001908152602001600020549250600160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1663a035b1fe6000604051602001526040518163ffffffff167c0100000000000000000000000000000000000000000000000000000000028152600401809050602060405180830381600087803b156100005760325a03f11561000057505050604051805190509150828583028115610000570490508093505b505050919050565b60011515600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff1615151415156113b957610000565b42615460600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205401111561140957610000565b60011515600660009054906101000a900460ff161515141561142a57610000565b600181111561143857610000565b600082141561144657610000565b42600560003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020819055506001600660006101000a81548160ff0219169083151502179055508060076004018190555082600760070160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff160217905550816007600301819055504360076002018190555033600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555060008114156115655761271060076006018190555061157d565b600181141561157c57624c4b406007600601819055505b5b5b505050565b60036020528060005260406000206000915090505481565b600060076000015490505b90565b600060076005015490505b90565b60046020528060005260406000206000915054906101000a900460ff1681565b600660009054906101000a900460ff1681565b600660019054906101000a900460ff1681565b60078060000154908060010154908060020154908060030154908060040154908060050154908060060154908060070160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff16908060080160009054906101000a900473ffffffffffffffffffffffffffffffffffffffff16905089565b60006000600660006101000a81548160ff021916908315150217905550600060076000018190555060006007600101819055506000600760020181905550600060076003018190555060006007600401819055506000600760070160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555060006007600501819055506000600760080160006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff16021790555060006007600601819055505b905600a165627a7a72305820a823159493ad69ac4cd87a74be53b100652fe6e424a9761ab053971e4937244c0029"},
        "0000000000000000000000000000000000000092": { "code":
        "0x606060405236156100fa576000357c0100000000000000000000000000000000000000000000000000000000900463ffffffff16806301b057b1146100ff5780630a1b10e1146101265780631785f53c14610159578063304171d91461018c57806337cf568c146101dc578063429b62e5146102235780635471e3e11461026e57806357279353146102975780636e25128e146102bd5780636fed67e6146102e65780637ba39fb31461030f5780637fd05e2a1461036c578063891edcdb146103be5780638bf611041461040e578063a035b1fe14610455578063bbaefe9f14610478578063d19eaea11461049b578063ef227b33146104be575b610000565b346100005761010c61050d565b604051808215151515815260200191505060405180910390f35b3461000057610157600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610520565b005b346100005761018a600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610674565b005b34610000576101c6600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919080359060200190919050506107d8565b6040518082815260200191505060405180910390f35b346100005761020d600480803573ffffffffffffffffffffffffffffffffffffffff169060200190919050506107fd565b6040518082815260200191505060405180910390f35b3461000057610254600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610815565b604051808215151515815260200191505060405180910390f35b346100005761027b610835565b604051808260ff1660ff16815260200191505060405180910390f35b34610000576102bb600480803590602001909190803590602001909190505061083a565b005b34610000576102ca610af0565b604051808260ff1660ff16815260200191505060405180910390f35b34610000576102f3610af5565b604051808260ff1660ff16815260200191505060405180910390f35b346100005761032a6004808035906020019091905050610afa565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b34610000576103bc600480803573ffffffffffffffffffffffffffffffffffffffff1690602001909190803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610b37565b005b34610000576103f8600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091908035906020019091905050610db3565b6040518082815260200191505060405180910390f35b346100005761043f600480803573ffffffffffffffffffffffffffffffffffffffff16906020019091905050610dd8565b6040518082815260200191505060405180910390f35b3461000057610462610df0565b6040518082815260200191505060405180910390f35b3461000057610485610df6565b6040518082815260200191505060405180910390f35b34610000576104a8610dfc565b6040518082815260200191505060405180910390f35b34610000576104cb610e02565b604051808273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200191505060405180910390f35b600660009054906101000a900460ff1681565b600960009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff1614151561057c57610000565b6001600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506005805480600101828181548183558181151161061d5781836000526020600020918201910161061c91905b80821115610618576000816000905550600101610600565b5090565b5b505050916000526020600020900160005b83909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff160217905550505b50565b600960009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff163373ffffffffffffffffffffffffffffffffffffffff161415156106d057610000565b6000600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506000600360008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002081905550600160008273ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002080604801906107d391905b808211156107cf5760008160009055506001016107b7565b5090565b505b50565b6002602052816000526040600020816048811015610000570160005b91509150505481565b60046020528060005260406000206000915090505481565b60006020528060005260406000206000915054906101000a900460ff1681565b600581565b600060011515600060003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff16151514151561089b57610000565b42610e10600460003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020540111156108eb57610000565b60018310156108f957600192505b600182101561090757600191505b60056007548115610000570460075401831115610931576005600754811561000057046007540192505b6005600854811561000057046008540182111561095b576005600854811561000057046008540191505b42600460003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002081905550604860ff16600360003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1681526020019081526020016000205481156100005706905082600160003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020826048811015610000570160005b508190555081600260003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020826048811015610000570160005b5081905550600360003373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060008154809291906001019190505550610aea610e28565b5b505050565b600581565b604881565b600581815481101561000057906000526020600020900160005b915054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60011515600660009054906101000a900460ff1615151415610b5857610000565b6001600660006101000a81548160ff0219169083151502179055506001600060008473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff0219169083151502179055506001600060008373ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060006101000a81548160ff02191690831515021790555060058054806001018281815481835581811511610c6c57818360005260206000209182019101610c6b91905b80821115610c67576000816000905550600101610c4f565b5090565b5b505050916000526020600020900160005b84909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505060058054806001018281815481835581811511610d0857818360005260206000209182019101610d0791905b80821115610d03576000816000905550600101610ceb565b5090565b5b505050916000526020600020900160005b83909190916101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff160217905550506028600781905550610fa06008819055506091600960006101000a81548173ffffffffffffffffffffffffffffffffffffffff021916908373ffffffffffffffffffffffffffffffffffffffff1602179055505b5050565b6001602052816000526040600020816048811015610000570160005b91509150505481565b60036020528060005260406000206000915090505481565b60075481565b60085481565b610e1081565b600960009054906101000a900473ffffffffffffffffffffffffffffffffffffffff1681565b60006000600060006000600060009550600094506000935060009250600091505b600580549050821015611280576001151560006000600585815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff16815260200190815260200160002060009054906101000a900460ff161515141561127257600160480360ff1660036000600585815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020541015156110b857600090505b604860ff168110156110b35760016000600584815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b50548601955060026000600584815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b505484019350848060010195505082806001019350505b8080600101915050610f73565b611271565b600090505b60036000600584815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020548110156112705760016000600584815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b50548601955060026000600584815481101561000057906000526020600020900160005b9054906101000a900473ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff1673ffffffffffffffffffffffffffffffffffffffff168152602001908152602001600020816048811015610000570160005b505484019350848060010195505082806001019350505b80806001019150506110bd565b5b5b5b8180600101925050610e49565b600560ff168587811561000057041115156112a557600560ff166007819055506112b5565b8486811561000057046007819055505b600560ff168385811561000057041115156112da57600560ff166008819055506112ea565b8284811561000057046008819055505b5b5050505050505600a165627a7a72305820dd2ba815d925f767173946c2f4a8bfc0bee47e87210646f2efe3a61d4a4a1ebf0029"}
	}
}
)E";
