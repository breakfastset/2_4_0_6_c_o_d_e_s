#ifndef LECTURE_08_CP2406_2_PAIR_H
#define LECTURE_08_CP2406_2_PAIR_H

template <typename K, typename V>
class Pair {
private:
    K key;
    V value;

public:
    Pair(K key, V value);
    K getKey();
    V getValue();
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value) {
    this->key = key;
    this->value = value;
}

template<typename K, typename V>
K Pair<K, V>::getKey() {
    return this->key;
}

template<typename K, typename V>
V Pair<K, V>::getValue() {
    return this->value;
}

#endif //LECTURE_08_CP2406_2_PAIR_H