function isBoolean(value) {
    return value === false || value === true;
}

function prettystring(obj) {
    return JSON.stringify(obj, null, 4);
}

module.exports = {
    isBoolean,
    prettystring
}